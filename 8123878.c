int __fastcall sub_8123878(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  unsigned int v2; // r4@1
  int v3; // r3@1
  int v4; // r0@1
  signed int v5; // r2@1
  int v6; // r0@12
  int v7; // r2@16
  int v8; // r0@23
  int v10; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = v2039274;
  v4 = *(_WORD *)(v2039274 + 6) + 1;
  *(_WORD *)(v2039274 + 6) = v4;
  v5 = *(_BYTE *)(v3 + 1);
  if ( v5 == 2 )
  {
    if ( v4 << 16 == 37355520 )
    {
      *(_BYTE *)(v3 + 1) = 3;
      BeginNormalPaletteFade(-1, 3, 0, 0x10u, 0);
      play_sound_effect(4u);
    }
  }
  else if ( v5 > 2 )
  {
    if ( v5 == 3 )
    {
      if ( !(v202F38F & 0x80) )
        *(_BYTE *)(v3 + 1) = -1;
    }
    else if ( v5 == 255 )
    {
      SetVBlankCallback(0);
      DestroyTask(v1);
      DestroyTask(*v2039274);
      SetMainCallback2((int)sub_8123740);
    }
  }
  else if ( *(_BYTE *)(v3 + 1) )
  {
    if ( v5 == 1 )
    {
      v6 = *(_BYTE *)(v3 + 2);
      if ( v6 == 2 )
      {
        if ( v202FEB8 == 2 )
        {
          *(_BYTE *)(v3 + 1) = 2;
        }
        else if ( *(_WORD *)(v3 + 6) >= *(_WORD *)(v3 + 4) + 8 )
        {
          do
          {
            v8 = *(_DWORD *)(4 * v2 + 0x202F8D8);
            if ( v8 )
              *(_BYTE *)(*(_DWORD *)(4 * v2 + 0x202F8D8) + 62) = *(_BYTE *)(*(_DWORD *)(4 * v2 + 0x202F8D8) + 62) & 0xFB | 4 * ((((unsigned int)*(_BYTE *)(*(_DWORD *)(4 * v2 + 0x202F8D8) + 62) << 29 >> 31) ^ 1) & 1);
            v2 = (v2 + 1) & 0xFF;
          }
          while ( v2 <= 0x13 );
        }
      }
      else if ( v6 == 7 && v202F8D8 && *(_BYTE *)(v202F8D8 + 5) & 0xC )
      {
        do
        {
          v7 = *(_DWORD *)(4 * v2 + 0x202F8D8);
          if ( v7 )
            *(_BYTE *)(v7 + 5) &= 0xF3u;
          v2 = (v2 + 1) & 0xFF;
        }
        while ( v2 <= 0x13 );
        *(_BYTE *)(v2039274 + 1) = 2;
      }
    }
  }
  else if ( (unsigned __int16)v4 == *(_WORD *)(v3 + 4) )
  {
    sub_807C91C(*(_BYTE *)(v3 + 2));
    *(_BYTE *)(v2039274 + 1) = 1;
  }
  return v10;
}
