int __fastcall sub_8042CAC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    SetMainCallback2((int)sub_8042CE8);
    dword_300485C = (int)sub_8080990;
    DestroyTask(v1);
  }
  return v3;
}
