int __fastcall sub_812E14C(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned int v2; // r0@1
  int v3; // r4@7
  __int16 *v4; // r1@15
  signed __int16 v5; // r2@15
  int *v6; // r1@22
  int *v7; // r5@23
  __int16 *v8; // r2@24
  __int16 v9; // r0@24
  __int16 v10; // r0@26
  int *v11; // r4@29
  __int16 v12; // r0@29
  __int16 v13; // r1@33
  int *v14; // r4@35
  __int16 v15; // r0@35
  int v17; // [sp+0h] [bp-20h]@5
  int v18; // [sp+4h] [bp-1Ch]@5
  unsigned __int8 v19; // [sp+8h] [bp-18h]@5
  int v20; // [sp+Ch] [bp-14h]@5
  int v21; // [sp+1Ch] [bp-4h]@42

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        v4000050 = 16194;
        v4000052 = 3331;
        v400000B &= 0x3Fu;
        v400000A = v400000A & 0xFC | 1;
        if ( !(sub_8076BE0() << 24) )
          v400000A = v400000A & 0xF3 | 4;
        sub_8078914((int)&v17);
        v20 = 0;
        v40000D4 = &v20;
        v40000D8 = v18;
        v40000DC = -2063596544;
        LZDecompressVram((int)&gUnknown_08D2AA98, v18);
        LZDecompressVram((int)&gUnknown_08D2A9E0, v17);
        LoadCompressedPalette((int)&gUnknown_08D2AA80, 16 * v19, 32);
        if ( sub_8076BE0() << 24 )
        {
          sub_80763FC(v19, v18, 0, 0);
          word_30042C0 = -56;
          word_30041B4 = 0;
_0812E2D2:
          v6 = &dword_3004B20[10 * v1];
          *((_WORD *)v6 + 14) = word_30042C0;
          *((_WORD *)v6 + 15) = word_30041B4;
          goto _0812E380;
        }
        v3 = (unsigned __int8)battle_get_per_side_status(v202F7C9);
        if ( (unsigned __int8)battle_type_is_double() == 1 )
        {
          if ( v3 == 1 )
            word_30042C0 = -155;
          if ( v3 == 3 )
            word_30042C0 = -115;
          if ( !v3 )
            word_30042C0 = 14;
          if ( v3 != 2 )
            goto _0812E2CC;
          v4 = &word_30042C0;
          v5 = -20;
        }
        else
        {
          if ( v3 == 1 )
            word_30042C0 = -135;
          if ( v3 )
            goto _0812E2CC;
          v4 = &word_30042C0;
          v5 = -10;
        }
        *v4 = v5;
_0812E2CC:
        word_30041B4 = 0;
        goto _0812E2D2;
      case 1u:
        v7 = &dword_3004B20[10 * v1];
        *((_WORD *)v7 + 7) = 0;
        if ( (unsigned __int8)battle_side_get_owner(v202F7C9) == 1 )
        {
          v8 = &word_30042C0;
          v9 = gUnknown_08402604[*((_WORD *)v7 + 6)] + *((_WORD *)v7 + 14);
        }
        else
        {
          v8 = &word_30042C0;
          v9 = *((_WORD *)v7 + 14) - gUnknown_08402604[*((_WORD *)v7 + 6)];
        }
        *v8 = v9;
        v6 = &dword_3004B20[10 * v1];
        v10 = *((_WORD *)v6 + 6) + 1;
        *((_WORD *)v6 + 6) = v10;
        if ( v10 == 5 )
          *((_WORD *)v6 + 4) = 5;
        else
_0812E380:
          ++*((_WORD *)v6 + 4);
        return v21;
      case 2u:
        v11 = &dword_3004B20[10 * v1];
        v12 = *((_WORD *)v11 + 5) - 1;
        *((_WORD *)v11 + 5) = v12;
        if ( v12 <= 4 )
          *((_WORD *)v11 + 5) = 5;
        v4000052 = (HIWORD(dword_3004B20[10 * v1 + 2]) << 8) | 3;
        if ( *((_WORD *)v11 + 5) == 5 )
          goto _0812E3DC;
        return v21;
      case 3u:
        v11 = &dword_3004B20[10 * v1];
        v13 = *((_WORD *)v11 + 7) + 1;
        *((_WORD *)v11 + 7) = v13;
        if ( v13 > (signed int)gUnknown_08402608[*((_WORD *)v11 + 6)] )
_0812E3DC:
          ++*((_WORD *)v11 + 4);
        return v21;
      case 4u:
        v14 = &dword_3004B20[10 * v1];
        v15 = *((_WORD *)v14 + 5) + 1;
        *((_WORD *)v14 + 5) = v15;
        if ( v15 > 13 )
          *((_WORD *)v14 + 5) = 13;
        v4000052 = (HIWORD(dword_3004B20[10 * v1 + 2]) << 8) | 3;
        if ( *((_WORD *)v14 + 5) == 13 )
          *((_WORD *)v14 + 4) = 1;
        return v21;
      case 5u:
        sub_8078914((int)&v17);
        v20 = 0;
        v40000D4 = &v20;
        v40000D8 = v18;
        v40000DC = -2063597056;
        if ( !(sub_8076BE0() << 24) )
          v400000A &= 0xF3u;
        v400000A = v400000A & 0xFC | 1;
        word_30042C0 = 0;
        word_30041B4 = 0;
        v4000050 = 0;
        v4000052 = 0;
        move_anim_task_del(v1);
        return v21;
      default:
        return v21;
    }
  }
  return v21;
}
