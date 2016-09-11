int __fastcall sub_80839DC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  signed int v3; // r0@1
  signed int v4; // r0@11
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( sub_8064C84() << 24 )
    {
      sub_8055574();
      sub_8007270(v202E8CE);
      *((_WORD *)v2 + 4) = 2;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      v4 = sub_80554F8();
      if ( v4 == 1 )
      {
        textbox_close();
        *((_WORD *)v2 + 4) = 0;
        SwitchTaskToFollowupFunc(v1);
      }
      else if ( v4 > 1 && v4 == 2 )
      {
        *((_WORD *)v2 + 4) = 3;
      }
    }
    else if ( v3 == 3 )
    {
      sub_8055588();
      textbox_close();
      MenuZeroFillScreen();
      DestroyTask(v1);
      script_env_2_enable_and_set_ctx_running();
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    box_related_two__2((int)gUnknown_081A490C);
    *((_WORD *)v2 + 4) = 1;
  }
  return v6;
}
