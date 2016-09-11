int __fastcall task50_startmenu(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  if ( sub_807117C(v2, (_WORD *)v2 + 1) == 1 )
  {
    *(_WORD *)v2 = 0;
    SwitchTaskToFollowupFunc(v1);
  }
  return v4;
}
