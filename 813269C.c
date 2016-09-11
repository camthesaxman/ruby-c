int __fastcall sub_813269C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    SetMainCallback2((int)sub_81326D8);
    dword_300485C = (int)sub_8080990;
    DestroyTask(v1);
  }
  return v3;
}
