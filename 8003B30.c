int __fastcall ApplyColors_UnshadowedFont(int a1, int *a2, unsigned __int8 a3, unsigned __int8 a4)
{
  signed int v4; // r5@1
  int *v5; // r6@1
  unsigned int v6; // r2@2
  int *v7; // r1@2
  int v9; // [sp+0h] [bp-1Ch]@1
  int v10; // [sp+4h] [bp-18h]@1
  int v11; // [sp+18h] [bp-4h]@3

  v9 = a4;
  v10 = a3;
  v4 = 0;
  v5 = a2;
  do
  {
    v6 = *(_BYTE *)(a1 + v4);
    v7 = &v9 + (v6 & 1);
    v6 <<= 24;
    *v5 = *v7 | 16 * *(&v9 + ((v6 >> 25) & 1)) | (*(&v9 + ((v6 >> 26) & 1)) << 8) | (*(&v9 + ((v6 >> 27) & 1)) << 12) | (*(&v9 + ((v6 >> 28) & 1)) << 16) | (*(&v9 + ((v6 >> 29) & 1)) << 20) | (*(&v9 + ((v6 >> 30) & 1)) << 24) | (*(&v9 + (v6 >> 31)) << 28);
    ++v5;
    ++v4;
  }
  while ( v4 <= 7 );
  return v11;
}
