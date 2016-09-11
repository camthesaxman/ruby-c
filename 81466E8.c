int __fastcall sub_81466E8(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r7@1
  int v3; // r2@1
  _BYTE *v4; // r6@1
  int v5; // r1@1
  signed int v6; // r5@3
  int v7; // r1@5
  signed __int16 v8; // r0@11
  int v10; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = &byte_3004B28[40 * a1];
  v5 = (unsigned __int8)byte_3005D1D + (unsigned __int8)byte_3005D1C;
  if ( v5 || !(v3 & 0x80) )
  {
    v6 = v3 << 24;
    if ( v5 + 1 != (unsigned __int8)byte_3005D1E || v3 << 24 <= 0 )
    {
      audio_play(5u);
      v7 = (unsigned __int8)byte_3005D1D + (unsigned __int8)byte_3005D1C + (v6 >> 24);
      if ( v7 >= 0 )
      {
        if ( v7 < (unsigned __int8)byte_3005D1E )
          *((_WORD *)v4 + 1) = v6 >> 24;
        else
          *((_WORD *)v4 + 1) = (unsigned __int8)byte_3005D1E
                             - (unsigned __int8)byte_3005D1D
                             - (unsigned __int8)byte_3005D1C
                             - 1;
      }
      else
      {
        *((_WORD *)v4 + 1) = -(signed __int16)((unsigned __int8)byte_3005D1D + (unsigned __int8)byte_3005D1C);
      }
      dword_3004B20[10 * v2] = (int)sub_8146798;
      if ( v6 >= 0 )
        v8 = 16;
      else
        v8 = -16;
      *(_WORD *)v4 = v8;
    }
  }
  return v10;
}
