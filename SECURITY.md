# Security Policy

<!--
## Supported Versions

Use this section to tell people about which versions of your project are
currently being supported with security updates.

| Version | Supported          |
| ------- | ------------------ |
| 5.1.x   | :white_check_mark: |
| 5.0.x   | :x:                |
| 4.0.x   | :white_check_mark: |
| < 4.0   | :x:                |
-->

## Developer Guide to modern C++ Security
- Use std smart pointers (unique flavor or shared flavor)
- Do not manually manage memory with malloc & free.
- Use std::vector - the dynamic array
- Use const where possible
- Use encapsulation features and access modifiers

## Reporting a Vulnerability

Since this is a learning project, please create an issue or pull request, 
describing the problem and optionally proposing a solution.
Issues will either be fixed or closed as soon as possible.
If the pull request is reasonable you can expect it to be merged.
