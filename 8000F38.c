int __fastcall ResetOamRange(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int i; // r3@1
  int *v3; // r0@2
  int v5; // [sp+Ch] [bp-4h]@0

  for ( i = a1; i < a2; i = (i + 1) & 0xFF )
  {
    v3 = &dword_30017AC[2 * i];
    *v3 = 19923104;
    v3[1] = 3072;
  }
  return v5;
}
