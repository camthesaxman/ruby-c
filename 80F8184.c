int __fastcall sub_80F8184(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  unsigned int v3; // r0@1
  signed __int16 v4; // r0@3
  char *v5; // r1@6
  int v6; // r3@6
  int i; // r0@6
  int v8; // r1@13
  signed int v9; // r0@13
  int v10; // r0@15
  signed __int16 v11; // r0@18
  char *v12; // r0@23
  int v13; // r4@23
  signed int v14; // r0@33
  int v15; // r0@42
  int v17; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  sub_80F7FB0((int)v2, (int)&unk_3005DA0);
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        sub_80F7BA0();
        InitWindowFromConfig(v202E9C8, (int)&gWindowConfig_81E6CE4);
        sub_8002EB0(v202E9C8, (int)gStringVar4, 2, 4, 0xFu);
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 6) = 0;
        *((_WORD *)v2 + 7) = 0;
        *((_WORD *)v2 + 8) = 0;
        sub_8074FB8(4u);
        v4 = 1;
        goto _080F83C6;
      case 1u:
        if ( !(sub_8074FD0() << 24) )
          return v17;
        v4 = 2;
        goto _080F83C6;
      case 2u:
        v5 = &gStringVar4[*((_WORD *)v2 + 7)];
        v6 = 0;
        for ( i = (unsigned __int8)*v5; i && i != 254 && i != 252 && i != 255; i = (unsigned __int8)*v5 )
        {
          ++v5;
          v6 = (v6 + 1) & 0xFFFF;
        }
        if ( *((_WORD *)v2 + 9) )
        {
          v8 = 2 * *((_WORD *)v2 + 8);
          v9 = 33719510;
        }
        else
        {
          v8 = 2 * *((_WORD *)v2 + 8);
          v9 = 33719498;
        }
        v20388BC = (*(_WORD *)(v9 + v8) & 3) + ((*(_WORD *)(v9 + v8) >> 3) & 1);
        v10 = word_3005DA4 / v6;
        word_3005DA4 = v10;
        if ( v10 << 16 <= 0 )
          word_3005DA4 = 1;
        ++*((_WORD *)v2 + 8);
        if ( *((_WORD *)v2 + 6) )
          v11 = 5;
        else
          v11 = 3;
        *((_WORD *)v2 + 4) = v11;
        *((_WORD *)v2 + 5) = 0;
        return v17;
      case 5u:
        if ( !*((_WORD *)v2 + 6) )
          goto _080F83C4;
        --*((_WORD *)v2 + 6);
        return v17;
      case 3u:
        v12 = &gStringVar4[*((_WORD *)v2 + 7)];
        v13 = (unsigned __int8)*v12;
        if ( v13 == 255 )
        {
          sub_8074F6C(0x190u, 6u);
          sub_81DE0D0(&unk_3007400, 2);
          script_env_2_enable_and_set_ctx_running();
          DestroyTask(v1);
          return v17;
        }
        if ( !*v12 )
        {
          sub_8003418(v202E9C8);
          ++*((_WORD *)v2 + 7);
          *((_WORD *)v2 + 4) = 2;
          *((_WORD *)v2 + 6) = 0;
          return v17;
        }
        if ( v13 == 254 )
        {
          ++*((_WORD *)v2 + 7);
          *((_WORD *)v2 + 4) = 2;
          *((_WORD *)v2 + 6) = 0;
          return v17;
        }
        if ( v13 == 252 )
        {
          *((_WORD *)v2 + 7) += 2;
          *((_WORD *)v2 + 4) = 2;
          *((_WORD *)v2 + 6) = 8;
          return v17;
        }
        if ( v13 == 55 )
        {
          *v12 = 0;
          sub_8003418(v202E9C8);
          ++*((_WORD *)v2 + 7);
          *((_WORD *)v2 + 6) = 0;
          return v17;
        }
        v14 = *((_WORD *)v2 + 5);
        if ( v14 == 1 )
          goto _080F8394;
        if ( v14 > 1 )
        {
          if ( v14 == 2 )
          {
            ++*((_WORD *)v2 + 7);
            *((_WORD *)v2 + 5) = 0;
            *((_WORD *)v2 + 6) = word_3005DA4;
            v4 = 4;
_080F83C6:
            *((_WORD *)v2 + 4) = v4;
          }
        }
        else if ( !*((_WORD *)v2 + 5) )
        {
          sub_8003418(v202E9C8);
_080F8394:
          ++*((_WORD *)v2 + 5);
        }
        break;
      case 4u:
        v15 = *((_WORD *)v2 + 6) - 1;
        *((_WORD *)v2 + 6) = v15;
        if ( v15 << 16 )
          return v17;
_080F83C4:
        v4 = 3;
        goto _080F83C6;
      default:
        return v17;
    }
  }
  return v17;
}
