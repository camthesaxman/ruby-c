int __fastcall EncryptBoxMon(int a1)
{
  int v1; // r3@1
  unsigned int v2; // r4@1
  int *v3; // r2@1
  int v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 32);
  do
  {
    v4 = *v3 ^ *(_DWORD *)v1;
    *v3 = v4;
    *v3 = v4 ^ *(_DWORD *)(v1 + 4);
    ++v3;
    ++v2;
  }
  while ( v2 <= 0xB );
  return v6;
}
