int __fastcall BlendPalettes(unsigned int a1, unsigned __int8 a2, __int16 a3)
{
  unsigned int v3; // r4@1
  unsigned __int8 v4; // r7@1
  __int16 v5; // r6@1
  int i; // r5@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  for ( i = 0; v3; i = (i + 16) & 0xFFFF )
  {
    if ( v3 & 1 )
      BlendPalette(i, 0x10u, v4, v5);
    v3 >>= 1;
  }
  return v8;
}
