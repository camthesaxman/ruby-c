int __fastcall sub_81488BC(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_();
  if ( v2 )
  {
    if ( v2 > 0 )
    {
      if ( v2 != 1 )
        goto _0814891E;
    }
    else if ( v2 != -1 )
    {
      goto _0814891E;
    }
    audio_play(5u);
    DestroyTask(v1);
    SetMainCallback2((int)sub_8148B34);
  }
  else
  {
    audio_play(5u);
    sub_8071F40((int)"Ω‡Ÿ’Ê›‚€");
    dword_3004B20[10 * v1] = (int)sub_8148930;
  }
_0814891E:
  AnimateSprites();
  BuildOamBuffer();
  return v4;
}
