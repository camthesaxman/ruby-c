int __fastcall sub_81315C8(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  __int16 v3; // r0@3
  char v4; // r0@4
  __int16 v5; // r1@5
  char v6; // r0@6
  __int16 v7; // r1@7
  __int16 v8; // r0@9
  char v9; // r0@10
  __int16 v10; // r0@12
  __int16 v11; // r1@13
  int v13; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = *(_WORD *)(v1 + 38) + 10;
        *(_WORD *)(v1 + 38) = v3;
        if ( !(v3 & 0x8000) )
        {
          v4 = sub_8076F98(0x3Fu);
          audio_play_and_stuff(0xCDu, v4);
          *(_WORD *)(v1 + 38) = 0;
          goto _081316B0;
        }
        break;
      case 1u:
        v5 = *(_WORD *)(v1 + 48) + 4;
        *(_WORD *)(v1 + 48) = v5;
        *(_WORD *)(v1 + 38) = -(gSineTable[*(_WORD *)(v1 + 48)] << 16 >> 19);
        if ( v5 > 127 )
        {
          v6 = sub_8076F98(0x3Fu);
          audio_play_and_stuff(0xCDu, v6);
          *(_WORD *)(v1 + 48) = 0;
          *(_WORD *)(v1 + 38) = 0;
          goto _081316B0;
        }
        break;
      case 2u:
        v7 = *(_WORD *)(v1 + 48) + 6;
        *(_WORD *)(v1 + 48) = v7;
        *(_WORD *)(v1 + 38) = -(gSineTable[*(_WORD *)(v1 + 48)] << 16 >> 20);
        if ( v7 > 127 )
        {
          *(_WORD *)(v1 + 48) = 0;
          *(_WORD *)(v1 + 38) = 0;
          goto _081316B0;
        }
        break;
      case 3u:
        v8 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v8;
        if ( v8 > 8 )
        {
          v9 = sub_8076F98(0x3Fu);
          audio_play_and_stuff(0xC0u, v9);
          *(_WORD *)(v1 + 48) = 0;
_081316B0:
          ++*(_WORD *)(v1 + 46);
        }
        break;
      case 4u:
        v10 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v10;
        if ( v10 > 8 )
        {
          *(_WORD *)(v1 + 48) = 0;
          v11 = *(_WORD *)(v1 + 50) + 1;
          *(_WORD *)(v1 + 50) = v11;
          *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (v11 & 1);
          if ( *(_WORD *)(v1 + 50) == 7 )
            move_anim_8072740(v1);
        }
        break;
      default:
        return v13;
    }
  }
  return v13;
}
