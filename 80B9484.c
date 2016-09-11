int __fastcall sub_80B9484(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@3
  int v5; // r0@5
  int *v6; // r0@7
  __int16 v7; // r5@7
  __int16 v8; // r0@9
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        sub_8007270(v202E8CE);
        VarSet(0x4000u, 1);
        byte_3000718 = 0;
        v4 = sub_80B92AC();
        sub_80C71D8(v4);
        *(_WORD *)v2 = 1;
        *((_WORD *)v2 + 10) = (unsigned __int8)CreateTask((int)sub_80B95F0, 80);
        *((_WORD *)v2 + 15) = (unsigned __int8)CreateTask((int)sub_80B9450, 81);
        break;
      case 1u:
        if ( !LOBYTE(dword_3004B20[10 * *((_WORD *)v2 + 10) + 1]) )
        {
          *(_WORD *)v2 = 2;
          v5 = FlagSet(0x834u);
          sub_80C7240(v5);
          DestroyTask(v2[30]);
        }
        break;
      case 2u:
        *((_WORD *)v2 + 10) = (unsigned __int8)CreateTask((int)sub_80BA00C, 10);
        *(_WORD *)v2 = 3;
        audio_play(0xE0u);
        break;
      case 3u:
        v6 = &dword_3004B20[10 * *((_WORD *)v2 + 10)];
        v7 = *((_BYTE *)v6 + 4);
        if ( !*((_BYTE *)v6 + 4) )
        {
          *(_WORD *)v2 = 4;
          *((_WORD *)v2 + 10) = (unsigned __int8)sub_8083664();
          sub_80720B0();
          MenuPrint((int)"ÌÙ×ãæØ", 2, 0xFu);
          *((_WORD *)v2 + 8) = v7;
        }
        break;
      case 4u:
        v8 = *((_WORD *)v2 + 8) + 1;
        *((_WORD *)v2 + 8) = v8;
        if ( v8 > 60 )
          *(_WORD *)v2 = 5;
        break;
      case 5u:
        if ( !LOBYTE(dword_3004B20[10 * *((_WORD *)v2 + 10) + 1]) )
        {
          sub_8055588();
          MenuZeroFillScreen();
          DestroyTask(v1);
          script_env_2_enable_and_set_ctx_running();
        }
        break;
      default:
        return v10;
    }
  }
  return v10;
}
