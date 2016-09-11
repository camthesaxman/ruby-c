int __fastcall SetOamMatrix(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)
{
  char *v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v5 = (char *)gOamMatrices + (8 * a1 & 0x7FF);
  *(_WORD *)v5 = a2;
  *((_WORD *)v5 + 1) = a3;
  *((_WORD *)v5 + 2) = a4;
  *((_WORD *)v5 + 3) = a5;
  return v7;
}
