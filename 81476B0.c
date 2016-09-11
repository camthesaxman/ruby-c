int __fastcall sub_81476B0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@6
  int v5; // r0@10
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        *((_WORD *)v2 + 1) = 7200;
        *(_WORD *)v2 = 1;
        break;
      case 1u:
        if ( sub_8147774() )
        {
          MenuZeroFillScreen();
          audio_play(5u);
          *(_WORD *)v2 = 2;
        }
        else
        {
          v4 = *((_WORD *)v2 + 1) - 1;
          *((_WORD *)v2 + 1) = v4;
          if ( !(v4 << 16) )
          {
            MenuZeroFillScreen();
            *(_WORD *)v2 = 3;
            *((_WORD *)v2 + 1) = 30;
          }
        }
        break;
      case 2u:
        if ( !sub_8147774() )
          goto _08147748;
        sub_8064E2C();
        DestroyTask(v1);
        script_env_2_disable();
        break;
      case 3u:
_08147748:
        v5 = *((_WORD *)v2 + 1) - 1;
        *((_WORD *)v2 + 1) = v5;
        if ( !(v5 << 16) )
          *(_WORD *)v2 = 4;
        break;
      case 4u:
        sub_8064E2C();
        script_env_1_execute_new_script((int)&gUnknown_0815EF19);
        DestroyTask(v1);
        break;
      default:
        return v7;
    }
  }
  return v7;
}
