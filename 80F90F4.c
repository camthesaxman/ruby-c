int __fastcall Task_CallYesOrNoCallback(unsigned __int8 a1)
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
        return v4;
    }
    else if ( v2 != -1 )
    {
      return v4;
    }
    audio_play(5u);
    call_via_r1(v1, v20388C8);
  }
  else
  {
    audio_play(5u);
    call_via_r1(v1, v20388C4);
  }
  return v4;
}
