int sub_800E7C4()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v20239F8 & 0x40 )
  {
    sub_800B858();
    SetMainCallback2((int)sub_800F104);
    v2024D1E = 0;
  }
  else
  {
    sub_800E7F8();
  }
  return v1;
}
