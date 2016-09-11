int __fastcall sub_8135534(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_811AAE8() == 1 )
  {
    dword_3001778 = (int)sub_81354CC;
    SetMainCallback2((int)sub_800E7C4);
    DestroyTask(v1);
  }
  return v3;
}
