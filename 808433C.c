int __fastcall sub_808433C(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  _BYTE *v3; // r5@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = (_BYTE *)((*((_WORD *)v2 + 5) << 16) | *((_WORD *)v2 + 6));
  if ( *v3 << 31 )
  {
    while ( call_via_r3(v1, v2, v3, *(&gUnknown_0839B498 + *((_WORD *)v2 + 4))) << 24 )
      ;
  }
  else
  {
    SwitchTaskToFollowupFunc(a1);
  }
  return v5;
}
