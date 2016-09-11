int __fastcall sub_812DB84(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r0@1
  __int16 *v3; // r1@8
  signed __int16 v4; // r0@8
  int *v5; // r1@11
  signed __int16 v6; // r0@11
  int *v7; // r3@12
  int v8; // r0@12
  __int16 v9; // r0@13
  int *v10; // r3@17
  __int16 v11; // r0@17
  __int16 v12; // r0@20
  __int16 v13; // r0@23
  char v14; // r0@25
  int v15; // r2@26
  unsigned int v16; // r3@26
  int v18; // [sp+0h] [bp-2Ch]@5
  int v19; // [sp+4h] [bp-28h]@5
  unsigned __int8 v20; // [sp+8h] [bp-24h]@5
  int v21; // [sp+Ch] [bp-20h]@5
  int v22; // [sp+28h] [bp-4h]@31

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v4000050 = 16194;
        v4000052 = 4096;
        v400000B &= 0x3Fu;
        v400000A = v400000A & 0xFC | 1;
        if ( !(sub_8076BE0() << 24) )
          v400000A = v400000A & 0xF3 | 4;
        sub_8078914((int)&v18);
        v21 = 0;
        v40000D4 = &v21;
        v40000D8 = v19;
        v40000DC = -2063596544;
        LZDecompressVram((int)&gUnknown_08D2AA98, v19);
        LZDecompressVram((int)&gUnknown_08D2A9E0, v18);
        LoadCompressedPalette((int)&gUnknown_08D2AA80, 16 * v20, 32);
        if ( sub_8076BE0() << 24 )
        {
          sub_80763FC(v20, v19, 0, 0);
          word_30042C0 = -56;
          word_30041B4 = 0;
        }
        else
        {
          if ( battle_side_get_owner(v202F7C8) << 24 )
          {
            v3 = &word_30042C0;
            v4 = -135;
          }
          else
          {
            v3 = &word_30042C0;
            v4 = -10;
          }
          *v3 = v4;
          word_30041B4 = 0;
        }
        v5 = &dword_3004B20[10 * v1];
        *((_WORD *)v5 + 14) = word_30042C0;
        *((_WORD *)v5 + 15) = word_30041B4;
        v6 = *((_WORD *)v5 + 4) + 1;
        goto _0812DDD2;
      case 1u:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 8);
        *((_WORD *)v7 + 8) = v8 + 1;
        if ( v8 << 16 > 0 )
        {
          *((_WORD *)v7 + 8) = 0;
          v9 = *((_WORD *)v7 + 5) + 1;
          *((_WORD *)v7 + 5) = v9;
          if ( v9 > 12 )
            *((_WORD *)v7 + 5) = 12;
          v4000052 = ((16 - HIWORD(dword_3004B20[10 * v1 + 2])) << 8) | HIWORD(dword_3004B20[10 * v1 + 2]);
          if ( *((_WORD *)v7 + 5) == 12 )
            ++*((_WORD *)v7 + 4);
        }
        break;
      case 2u:
        v10 = &dword_3004B20[10 * v1];
        v11 = *((_WORD *)v10 + 5) - 1;
        *((_WORD *)v10 + 5) = v11;
        if ( v11 & 0x8000 )
          *((_WORD *)v10 + 5) = 0;
        v4000052 = ((16 - HIWORD(dword_3004B20[10 * v1 + 2])) << 8) | HIWORD(dword_3004B20[10 * v1 + 2]);
        if ( !*((_WORD *)v10 + 5) )
        {
          word_30042C0 = gUnknown_084025C0[*((_WORD *)v10 + 6)] + *((_WORD *)v10 + 14);
          v12 = *((_WORD *)v10 + 6) + 1;
          *((_WORD *)v10 + 6) = v12;
          if ( v12 == 4 )
            *((_WORD *)v10 + 4) = 4;
          else
            *((_WORD *)v10 + 4) = 3;
        }
        break;
      case 3u:
        v5 = &dword_3004B20[10 * v1];
        v13 = *((_WORD *)v5 + 7) + 1;
        *((_WORD *)v5 + 7) = v13;
        if ( v13 == 4 )
        {
          *((_WORD *)v5 + 7) = 0;
          v6 = 1;
_0812DDD2:
          *((_WORD *)v5 + 4) = v6;
          v14 = sub_8076F98(0xC0u);
          audio_play_and_stuff(0xE4u, v14);
        }
        break;
      case 4u:
        sub_8078914((int)&v18);
        v15 = v18;
        v16 = 0x2000;
        do
        {
          v21 = 0;
          v40000D4 = &v21;
          v40000D8 = v15;
          v40000DC = -2063596544;
          v15 += 4096;
          v16 -= 4096;
        }
        while ( v16 > 0x1000 );
        v21 = 0;
        v40000D4 = &v21;
        v40000D8 = v19;
        v40000DC = -2063597056;
        if ( !(sub_8076BE0() << 24) )
          v400000A &= 0xF3u;
        v400000A = v400000A & 0xFC | 1;
        word_30042C0 = 0;
        word_30041B4 = 0;
        v4000050 = 0;
        v4000052 = 0;
        move_anim_task_del(v1);
        break;
      default:
        return v22;
    }
  }
  return v22;
}
