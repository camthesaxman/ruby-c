int __fastcall sub_80B0458(unsigned __int8 a1)
{
  unsigned int v1; // r6@1
  int v2; // r9@1
  int v3; // r7@1
  int v4; // r3@2
  __int16 *v5; // r2@2
  __int16 v6; // r4@2
  __int16 v7; // r0@4
  int v9; // [sp+1Ch] [bp-4h]@0

  v1 = 0;
  v2 = 5 * a1;
  v3 = 40 * a1;
  do
  {
    v4 = 4 * v1 & 0xFF;
    v5 = (__int16 *)(&byte_3004B28[2 * v4] + v3);
    v6 = *v5;
    if ( *v5 != 255 )
    {
      if ( *(_WORD *)(&byte_3004B28[2 * (v4 + 1)] + v3) )
        v7 = v6 - 1;
      else
        v7 = v6 + 1;
      *v5 = v7;
      if ( *((_WORD *)&byte_3004B28[8 * v2] + v4) == 16 || !*((_WORD *)&byte_3004B28[8 * v2] + v4) )
        *((_WORD *)&byte_3004B28[8 * v2] + v4 + 1) ^= 1u;
      BlendPalette(16 * (*(_BYTE *)(v1 + 33657368) + 5) + 6, 2u, *(&byte_3004B28[2 * v4] + v3), 19455);
    }
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  return v9;
}
