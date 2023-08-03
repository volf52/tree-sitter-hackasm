/**
 * @param {string} base
 * @param {number} len
 * @param {string} prefix
 * @param {Array<string>} acc
 */
const permute = (base, len, prefix, acc) => {
  if (len === 0) {
    acc.push(prefix);
    return;
  }

  for (let i = 0; i < base.length; i++) {
    let firstChar = base[i];
    let charsLeft = base.substring(0, i) + base.substring(i + 1);
    permute(charsLeft, len - 1, prefix + firstChar, acc);
  }
};

/**
 * @param {string} choices
 * @returns {Array<string>}
 */
const buildPermutations = (choices) => {
  /** @type {Array<string>} */
  const result = [...choices];

  for (let i = 2; i <= choices.length; i++) {
    permute(choices, i, '', result);
  }

  return result;
};

module.exports = {
  buildPermutations,
};
