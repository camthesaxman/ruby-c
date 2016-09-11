int __fastcall sub_811D6E8(int a1, __int16 a2, int a3, __int16 a4, __int16 a5, int a6)
{
  int v6; // r10@1
  int v7; // r6@1
  unsigned int v8; // r5@1
  __int16 v9; // r9@2
  int v10; // r7@2
  int v11; // r4@3
  unsigned int v12; // r1@3
  int v14; // [sp+1Ch] [bp-4h]@0

  v6 = a1;
  v7 = 0;
  v8 = (unsigned __int16)a6;
  if ( a6 << 16 > 0 )
  {
    v9 = a2;
    v10 = a4;
    do
    {
      v11 = (signed __int16)a3;
      *(_WORD *)(2 * v7 + v6) = sine(a3 & 0xFF, a5) + v9;
      v12 = (v8 << 16) - 0x10000;
      v7 = (v7 + 1) & 0xFF;
      a3 = (v11 + v10) & 0xFFFF;
      v8 = v12 >> 16;
    }
    while ( (signed int)v12 > 0 );
  }
  return v14;
}
