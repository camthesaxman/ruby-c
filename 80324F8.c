int __fastcall sub_80324F8(int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r1@1
  unsigned int v4; // r6@1
  unsigned int v5; // r7@1
  __int16 v6; // r4@1
  __int16 v7; // r0@1
  int v8; // r0@6
  int v9; // r0@6
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 24;
  v4 = v3 >> 24;
  v5 = v3 >> 24;
  v6 = GetMonData(a1, 57);
  v7 = GetMonData(v2, 58);
  if ( (sub_8046200(v6, v7) & 0xFF) == 1 )
  {
    if ( !(*(_BYTE *)(4 * v4 + 0x2017800) & 2) )
    {
      if ( !(*(_BYTE *)(4 * (v4 ^ 2) + 0x2017800) & 2) )
        audio_play(90);
      *(_BYTE *)(4 * v4 + 0x2017800) |= 2u;
    }
  }
  else
  {
    v8 = *(_BYTE *)(4 * v4 + 0x2017800) & 0xFD;
    *(_BYTE *)(4 * v4 + 0x2017800) = v8;
    v9 = battle_type_is_double(v8) << 24;
    if ( v9 )
    {
      if ( battle_type_is_double(v9) << 24 && !(*(_BYTE *)(4 * (v5 ^ 2) + 0x2017800) & 2) )
        m4aSongNumStop(90);
    }
    else
    {
      m4aSongNumStop(90);
    }
  }
  return v11;
}
