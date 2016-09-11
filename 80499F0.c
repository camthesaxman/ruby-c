int __fastcall sub_80499F0(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  int v4; // r1@1
  int i; // r3@1

  v3 = a2;
  a3 = (unsigned __int8)a3;
  v4 = 0;
  for ( i = 0; i < v3; ++i )
  {
    if ( a3 != i )
      v4 = (v4 + *(_BYTE *)(a1 + i)) & 0xFF;
  }
  return v4;
}
