int __fastcall sub_80D851C(unsigned __int8 a1)
{
  int v1; // r6@1
  __int16 *v2; // r3@1
  int *v3; // r1@1
  __int16 *v4; // r2@1
  unsigned int v5; // r0@1
  int *v6; // r4@3
  __int16 v7; // r1@3
  int *v8; // r1@5
  __int16 v9; // r0@5
  int *v10; // r4@7
  __int16 v11; // r0@7
  __int16 v12; // r1@8
  int v13; // r2@10
  unsigned int v14; // r3@10
  int v16; // [sp+0h] [bp-30h]@10
  int v17; // [sp+4h] [bp-2Ch]@12
  int v18; // [sp+Ch] [bp-24h]@11
  int v19; // [sp+2Ch] [bp-4h]@16

  v1 = a1;
  v2 = &word_30042C0;
  v3 = &dword_3004B20[10 * a1];
  word_30042C0 += *((_WORD *)v3 + 19);
  v4 = &word_30041B4;
  v5 = *((_WORD *)v3 + 16);
  if ( v5 <= 4 )
  {
    switch ( v5 )
    {
      case 0u:
        v6 = &dword_3004B20[10 * v1];
        v7 = gUnknown_083D9D98[++*((_WORD *)v6 + 13)];
        *((_WORD *)v6 + 15) = v7;
        v4000052 = v7 | ((17 - v7) << 8);
        if ( *((_WORD *)v6 + 15) == 5 )
        {
          ++*((_WORD *)v6 + 16);
          *((_WORD *)v6 + 15) = 0;
        }
        break;
      case 1u:
        v8 = &dword_3004B20[10 * v1];
        v9 = *((_WORD *)v8 + 15) + 1;
        *((_WORD *)v8 + 15) = v9;
        if ( v9 == 81 )
        {
          *((_WORD *)v8 + 15) = 5;
          ++*((_WORD *)v8 + 16);
        }
        break;
      case 2u:
        v10 = &dword_3004B20[10 * v1];
        v11 = *((_WORD *)v10 + 14) + 1;
        *((_WORD *)v10 + 14) = v11;
        if ( v11 == 4 )
        {
          *((_WORD *)v10 + 14) = 0;
          v12 = *((_WORD *)v10 + 15) - 1;
          *((_WORD *)v10 + 15) = v12;
          v4000052 = v12 | ((16 - v12) << 8);
          if ( !*((_WORD *)v10 + 15) )
          {
            ++*((_WORD *)v10 + 16);
            *((_WORD *)v10 + 15) = 0;
          }
        }
        break;
      case 3u:
        sub_8078914((int)&v16);
        v13 = v16;
        v14 = 0x2000;
        do
        {
          v18 = 0;
          v40000D4 = &v18;
          v40000D8 = v13;
          v40000DC = -2063596544;
          v13 += 4096;
          v14 -= 4096;
        }
        while ( v14 > 0x1000 );
        v18 = 0;
        v40000D4 = &v18;
        v40000D8 = v17;
        v40000DC = -2063597056;
        if ( !(sub_8076BE0() << 24) )
          v400000A &= 0xF3u;
        ++LOWORD(dword_3004B20[10 * v1 + 8]);
        v2 = &word_30042C0;
        v4 = &word_30041B4;
        goto _080D86AC;
      case 4u:
_080D86AC:
        *v2 = 0;
        *v4 = 0;
        v4000050 = 0;
        v4000052 = 0;
        v400000A = v400000A & 0xFC | 1;
        move_anim_task_del(v1);
        break;
      default:
        return v19;
    }
  }
  return v19;
}
