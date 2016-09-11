int __fastcall sub_80B05FC(unsigned __int8 a1)
{
  unsigned int v1; // r7@1
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r3@2
  _WORD *v5; // r2@2
  _WORD *v6; // r1@3
  __int16 v7; // r0@3
  __int16 v8; // r0@5
  unsigned __int8 *v9; // r5@10
  int v11; // [sp+1Ch] [bp-4h]@0

  v1 = 0;
  v2 = 5 * a1;
  v3 = 40 * a1;
  do
  {
    v4 = 4 * v1 & 0xFF;
    v5 = &byte_3004B28[2 * v4] + v3;
    if ( *v5 != 255 )
    {
      v6 = &byte_3004B28[2 * (v4 + 2)] + v3;
      v7 = *v6 + 1;
      *v6 = v7;
      if ( v7 > 2 )
      {
        *v6 = 0;
        if ( *(_WORD *)(&byte_3004B28[2 * (v4 + 1)] + v3) )
          v8 = *v5 - 1;
        else
          v8 = *v5 + 1;
        *v5 = v8;
        if ( *((_WORD *)&byte_3004B28[8 * v2] + v4) == 16 || !*((_WORD *)&byte_3004B28[8 * v2] + v4) )
          *((_WORD *)&byte_3004B28[8 * v2] + v4 + 1) ^= 1u;
        v9 = &byte_3004B28[2 * v4] + v3;
        BlendPalette(16 * (v1 + 5) + 10, 1u, *v9, 19455);
        BlendPalette(16 * (v1 + 5) + 12 + v1, 1u, *v9, 19455);
      }
    }
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  return v11;
}
