#include "protein_translation.h"

namespace protein_translation {

std::vector<std::string> proteins(std::string input) {

  std::vector<std::string> ps;

  for (size_t i = 0; i < input.length(); i += 3) {
    std::string value = std::string(1, input[i]) + input[i + 1] + input[i + 2];

    if (value == "AUG")
      ps.push_back("Methionine");
    else if (value == "UUU" || value == "UUC")
      ps.push_back("Phenylalanine");
    else if (value == "UUA" || value == "UUG")
      ps.push_back("Leucine");
    else if (value == "UCU" || value == "UCC" || value == "UCA" ||
             value == "UCG")
      ps.push_back("Serine");
    else if (value == "UAU" || value == "UAC")
      ps.push_back("Tyrosine");
    else if (value == "UGU" || value == "UGC")
      ps.push_back("Cysteine");
    else if (value == "UGG")
      ps.push_back("Tryptophan");
    else if (value == "UAA" || value == "UAG" || value == "UGA")
      break;
  }

  return ps;
}

} // namespace protein_translation
