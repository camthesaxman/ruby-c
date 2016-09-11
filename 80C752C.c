int __fastcall sub_80C752C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@3
  __int16 v5; // r0@5
  int v6; // r3@7
  int *v7; // r0@10
  __int16 v8; // r5@10
  __int16 v9; // r0@12
  __int16 v10; // r0@14
  int v12; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 1) + 1;
        *((_WORD *)v2 + 1) = v4;
        if ( v4 == 90 )
        {
          SetCameraPanningCallback(0);
          *((_WORD *)v2 + 1) = 0;
          *((_WORD *)v2 + 2) = (unsigned __int8)CreateTask((int)sub_80C72C4, 10);
          *(_WORD *)v2 = 1;
          audio_play(0x31u);
        }
        break;
      case 1u:
        v5 = *((_WORD *)v2 + 1) + 1;
        *((_WORD *)v2 + 1) = v5;
        if ( v5 == 150 )
        {
          pal_fill_black();
          *((_WORD *)v2 + 1) = 0;
          *(_WORD *)v2 = 2;
        }
        break;
      case 2u:
        v6 = *((_WORD *)v2 + 1) + 1;
        *((_WORD *)v2 + 1) = v6;
        if ( !(v202F38F & 0x80) && v6 << 16 > 19660800 )
        {
          *((_WORD *)v2 + 1) = 0;
          DestroyTask(v2[4]);
          *((_WORD *)v2 + 3) = (unsigned __int8)CreateTask((int)sub_80C7374, 10);
          *(_WORD *)v2 = 3;
          audio_play(0x32u);
        }
        break;
      case 3u:
        v7 = &dword_3004B20[10 * *((_WORD *)v2 + 3)];
        v8 = *((_BYTE *)v7 + 4);
        if ( !*((_BYTE *)v7 + 4) )
        {
          InstallCameraPanAheadCallback();
          *((_WORD *)v2 + 1) = v8;
          *(_WORD *)v2 = 4;
        }
        break;
      case 4u:
        v9 = *((_WORD *)v2 + 1) + 1;
        *((_WORD *)v2 + 1) = v9;
        if ( v9 == 90 )
        {
          audio_play(0x33u);
          *((_WORD *)v2 + 1) = 0;
          *(_WORD *)v2 = 5;
        }
        break;
      case 5u:
        v10 = *((_WORD *)v2 + 1) + 1;
        *((_WORD *)v2 + 1) = v10;
        if ( v10 == 120 )
        {
          MapGridSetMetatileIdAt(11, 8, 520);
          MapGridSetMetatileIdAt(11, 9, 528);
          MapGridSetMetatileIdAt(11, 10, 536);
          DrawWholeMapView();
          audio_play(0x34u);
          DestroyTask(v1);
          script_env_2_disable();
        }
        break;
      default:
        return v12;
    }
  }
  return v12;
}
