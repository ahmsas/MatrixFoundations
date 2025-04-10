# MatrixFoundations (Pre-README Draft)  
**Temporary Roadmap – Replace with Final README Later**  

---  

## **Project Scope**  
- **Purpose**: ANSI C (C89) library for core linear algebra (matrix ops, LU decomposition, eigenvalues).  
- **Focus**: Explicit memory management, numerical stability, and theory-backed code.  
- **Non-Goals**: GPU support, dynamic typing, or C++/Python extensions.  

---  

## **Implementation Checklist**  
### **Core Requirements**  
- [ ] ANSI C-compliant code (no C99+ features).  
- [ ] `Matrix` struct:  
  - [ ] Heap-allocated data with `double*`.  
  - [ ] Row/column counts as `int`.  
- [ ] Basic operations:  
  - [ ] `matrix_add()`, `matrix_multiply()`.  
  - [ ] Vector norms (L2, infinity).  
