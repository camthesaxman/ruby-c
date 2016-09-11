int __fastcall sub_8100C88(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 6);
  if ( v3 == 1 )
  {
    if ( !(v202F38F & 0x80) )
    {
      DrawWholeMapView();
      script_env_1_execute_new_script((int)&gUnknown_081A2F8A);
      MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
      *((_WORD *)v2 + 6) = 2;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      script_env_2_enable();
      sub_80FED90();
      pal_fill_black();
      *((_WORD *)v2 + 6) = 3;
    }
    else if ( v3 == 3 && (unsigned __int8)sub_807D770() == 1 )
    {
      *((_WORD *)v2 + 17) = -1;
      DisplayItemMessageOnField(v1, (int)&gUnknown_0840FCEA, (int)sub_81010F0, 0);
    }
  }
  else if ( !*((_WORD *)v2 + 6) )
  {
    sub_8100B6C();
    *((_WORD *)v2 + 6) = 1;
  }
  return v5;
}
