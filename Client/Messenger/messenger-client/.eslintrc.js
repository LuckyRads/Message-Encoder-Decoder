/* eslint-env node */

module.exports = {
    root: true,
    env: { browser: true, es2020: true },
    plugins: ["react", "react-refresh", "react-hooks", "@typescript-eslint"],
    extends: [
        "eslint:recommended",
        "plugin:react/recommended",
        "plugin:@typescript-eslint/recommended",
        "plugin:@typescript-eslint/recommended-requiring-type-checking",
        "plugin:react-hooks/recommended",
    ],
    parser: "react-refresh",
    parserOptions: {
        project: "./tsconfig.json",
        tsconfigRootDir: __dirname,
        sourceType: "module",
        ecmaFeatures: {
            jsx: true,
        },
    },
    rules: {
        "prefer-const": "error",
    },
};
