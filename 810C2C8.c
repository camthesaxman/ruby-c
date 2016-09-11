int __fastcall sub_810C2C8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( v2039244 == 3 )
      dword_300485C = (int)sub_8080990;
    sub_810C2B0();
    SetMainCallback2((int)*(&gUnknown_083F7EA8 + v2039244));
    DestroyTask(v1);
  }
  return v3;
}
