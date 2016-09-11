int __fastcall sub_80A3FA0(int a1, unsigned __int8 a2, signed int a3, int a4, unsigned __int8 a5, __int16 a6)
{
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r4@2
  int v9; // r12@2
  int v10; // r0@3
  signed int v11; // r3@3
  signed int v12; // r1@4
  int v14; // [sp+14h] [bp-4h]@0

  v6 = a1;
  v7 = a2;
  a4 = (unsigned __int8)a4;
  a3 = (unsigned __int8)a3;
  if ( a3 < a3 + a5 )
  {
    v8 = a2 + a4;
    v9 = a3 + a5;
    do
    {
      LOWORD(v10) = v7;
      v11 = a3 << 16;
      if ( v7 < v8 )
      {
        do
        {
          *(_WORD *)(2 * ((signed __int16)v10 + (a3 << 16 >> 11)) + v6) = a6;
          v12 = ((signed __int16)v10 + 1) << 16;
          v10 = ((signed __int16)v10 + 1) & 0xFFFF;
        }
        while ( v12 >> 16 < v8 );
      }
      a3 = (unsigned int)((a3 << 16) + 0x10000) >> 16;
    }
    while ( (v11 + 0x10000) >> 16 < v9 );
  }
  return v14;
}
