int sub_810B634()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = FieldEffectActiveListRemove(0x26u);
  if ( sub_81473B8(v0) & 0xFF )
    sub_8147408();
  else
    LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)task08_080A1C44, 8) + 2]) = 0;
  return v2;
}
