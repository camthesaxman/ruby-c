int __fastcall task50_0807B6D4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@4
  __int16 v5; // r0@8
  int v6; // r0@9
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 6) = 0;
        *((_WORD *)v2 + 7) = v4000048;
        v4000048 = 16191;
        v4000050 = 158;
        v4000054 = 0;
        ++*((_WORD *)v2 + 4);
        goto _0807E2D2;
      case 1u:
_0807E2D2:
        v4 = *((_WORD *)v2 + 5) + 3;
        *((_WORD *)v2 + 5) = v4;
        if ( v4 > 16 )
          *((_WORD *)v2 + 5) = 16;
        v4000054 = *((_WORD *)v2 + 5);
        if ( (signed int)*((_WORD *)v2 + 5) > 15 )
          goto _0807E344;
        break;
      case 2u:
        v5 = *((_WORD *)v2 + 6) + 1;
        *((_WORD *)v2 + 6) = v5;
        if ( v5 > 9 )
        {
          *((_WORD *)v2 + 6) = 0;
          v6 = *((_WORD *)v2 + 5) - 1;
          *((_WORD *)v2 + 5) = v6;
          if ( v6 << 16 <= 0 )
          {
            *((_WORD *)v2 + 5) = 0;
            ++*((_WORD *)v2 + 4);
          }
          v4000054 = *((_WORD *)v2 + 5);
        }
        break;
      case 3u:
        v4000050 = 0;
        v4000054 = 0;
        v4000048 = *((_WORD *)v2 + 7);
_0807E344:
        ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        script_env_2_enable_and_set_ctx_running();
        DestroyTask(v1);
        break;
      default:
        return v8;
    }
  }
  return v8;
}
