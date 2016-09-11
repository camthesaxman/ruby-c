int __fastcall sub_8125C3C(int a1)
{
  unsigned int v1; // r4@3
  unsigned int v2; // r4@7
  unsigned int v3; // r4@10
  unsigned int v4; // r4@14

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 > 5u )
  {
def_8125C4E:
    save_serialize_game();
    save_write_to_flash(0xFFFFu, (int)&gUnknown_08401DA4);
  }
  else
  {
    switch ( a1 )
    {
      case 5:
        v1 = 28;
        do
        {
          call_via_r1(v1, EraseFlashSector);
          v1 = (v1 + 1) & 0xFF;
        }
        while ( v1 <= 0x1F );
        goto _08125C82;
      case 3:
_08125C82:
        if ( (unsigned int)sub_8053108(0xAu) <= 0x3E6 )
          sav12_xor_increment(0xAu);
        v2 = 0;
        do
        {
          sub_81253C8(v2 + 28, gUnknown_08401E14[2 * v2], LOWORD(gUnknown_08401E14[2 * v2 + 1]));
          v2 = (v2 + 1) & 0xFF;
        }
        while ( v2 <= 1 );
        goto def_8125C4E;
      default:
        goto def_8125C4E;
      case 1:
        save_serialize_game();
        v3 = 0;
        do
        {
          save_write_to_flash(v3, (int)&gUnknown_08401DA4);
          v3 = (v3 + 1) & 0xFF;
        }
        while ( v3 <= 4 );
        break;
      case 2:
        save_serialize_game();
        save_write_to_flash(0, (int)&gUnknown_08401DA4);
        break;
      case 4:
        v4 = 28;
        do
        {
          call_via_r1(v4, EraseFlashSector);
          v4 = (v4 + 1) & 0xFF;
        }
        while ( v4 <= 0x1F );
        save_serialize_game();
        save_write_to_flash(0xFFFFu, (int)&gUnknown_08401DA4);
        break;
    }
  }
  return 0;
}
