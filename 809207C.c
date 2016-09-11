int __fastcall sub_809207C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r5@4
  signed int v3; // r4@4
  int *v4; // r4@15
  __int16 v5; // r0@16
  int *v6; // r4@18
  __int16 v7; // r0@19
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 2 )
  {
    audio_play(3u);
    dword_3004B20[10 * v1] = (int)sub_80927B8;
    return v9;
  }
  if ( word_300179E & 1 )
  {
    v2 = &dword_3004B20[10 * a1];
    v3 = *((_WORD *)v2 + 4);
    if ( v3 == 1 )
    {
      audio_play(0x15u);
      *((_WORD *)v2 + 5) = 4;
_080920F2:
      *v2 = (int)sub_809217C;
      return v9;
    }
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v9;
      audio_play(0x15u);
      *((_WORD *)v2 + 5) = 0;
      goto _080920F2;
    }
    if ( v3 == 2 )
    {
      audio_play(3u);
      *v2 = (int)sub_80927B8;
    }
  }
  else
  {
    if ( word_300179E & 0x20 )
    {
      v4 = &dword_3004B20[10 * a1];
      if ( (signed int)*((_WORD *)v4 + 4) > 0 )
      {
        audio_play(0x6Du);
        v5 = *((_WORD *)v4 + 4) - 1;
        *((_WORD *)v4 + 4) = v5;
        sub_8092AB0((unsigned __int8)v5);
      }
    }
    if ( word_300179E & 0x10 )
    {
      v6 = &dword_3004B20[10 * v1];
      if ( (signed int)*((_WORD *)v6 + 4) <= 1 )
      {
        audio_play(0x6Du);
        v7 = *((_WORD *)v6 + 4) + 1;
        *((_WORD *)v6 + 4) = v7;
        sub_8092AB0((unsigned __int8)v7);
      }
    }
  }
  return v9;
}
