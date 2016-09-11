int __fastcall sub_80DD190(unsigned __int8 a1)
{
  int v1; // r7@1
  __int16 *v2; // r1@2
  __int16 v3; // r0@2
  __int16 *v4; // r4@4
  unsigned int v5; // r0@4
  __int16 *v6; // r2@4
  int *v7; // r3@6
  __int16 v8; // r0@6
  __int16 v9; // r1@7
  int *v10; // r1@9
  __int16 v11; // r0@9
  int *v12; // r3@11
  __int16 v13; // r0@11
  __int16 v14; // r1@12
  int v15; // r2@14
  unsigned int v16; // r3@14
  int v18; // [sp+0h] [bp-30h]@14
  int v19; // [sp+4h] [bp-2Ch]@16
  int v20; // [sp+Ch] [bp-24h]@15
  int v21; // [sp+2Ch] [bp-4h]@20

  v1 = a1;
  if ( LOWORD(dword_3004B20[10 * a1 + 2]) )
  {
    v2 = &word_30042C0;
    v3 = word_30042C0 + 6;
  }
  else
  {
    v2 = &word_30042C0;
    v3 = word_30042C0 - 6;
  }
  *v2 = v3;
  v4 = v2;
  --word_30041B4;
  v5 = LOWORD(dword_3004B20[10 * v1 + 8]);
  v6 = &word_30041B4;
  if ( v5 <= 4 )
  {
    switch ( v5 )
    {
      case 0u:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 14) + 1;
        *((_WORD *)v7 + 14) = v8;
        if ( v8 == 4 )
        {
          *((_WORD *)v7 + 14) = 0;
          v9 = *((_WORD *)v7 + 15) + 1;
          *((_WORD *)v7 + 15) = v9;
          v4000052 = v9 | ((16 - v9) << 8);
          if ( *((_WORD *)v7 + 15) == 7 )
          {
            ++*((_WORD *)v7 + 16);
            *((_WORD *)v7 + 15) = 0;
          }
        }
        break;
      case 1u:
        v10 = &dword_3004B20[10 * v1];
        v11 = *((_WORD *)v10 + 15) + 1;
        *((_WORD *)v10 + 15) = v11;
        if ( v11 == 101 )
        {
          *((_WORD *)v10 + 15) = 7;
          ++*((_WORD *)v10 + 16);
        }
        break;
      case 2u:
        v12 = &dword_3004B20[10 * v1];
        v13 = *((_WORD *)v12 + 14) + 1;
        *((_WORD *)v12 + 14) = v13;
        if ( v13 == 4 )
        {
          *((_WORD *)v12 + 14) = 0;
          v14 = *((_WORD *)v12 + 15) - 1;
          *((_WORD *)v12 + 15) = v14;
          v4000052 = v14 | ((16 - v14) << 8);
          if ( !*((_WORD *)v12 + 15) )
          {
            ++*((_WORD *)v12 + 16);
            *((_WORD *)v12 + 15) = 0;
          }
        }
        break;
      case 3u:
        sub_8078914((int)&v18);
        v15 = v18;
        v16 = 0x2000;
        do
        {
          v20 = 0;
          v40000D4 = &v20;
          v40000D8 = v15;
          v40000DC = -2063596544;
          v15 += 4096;
          v16 -= 4096;
        }
        while ( v16 > 0x1000 );
        v20 = 0;
        v40000D4 = &v20;
        v40000D8 = v19;
        v40000DC = -2063597056;
        if ( !(sub_8076BE0() << 24) )
          v400000A &= 0xF3u;
        ++LOWORD(dword_3004B20[10 * v1 + 8]);
        v4 = &word_30042C0;
        v6 = &word_30041B4;
        goto _080DD358;
      case 4u:
_080DD358:
        *v4 = 0;
        *v6 = 0;
        v4000050 = 0;
        v4000052 = 0;
        v400000A = v400000A & 0xFC | 1;
        move_anim_task_del(v1);
        break;
      default:
        return v21;
    }
  }
  return v21;
}
