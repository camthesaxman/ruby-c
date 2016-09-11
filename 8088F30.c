int sub_8088F30()
{
  unsigned __int8 v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    FieldEffectActiveListRemove(0x1Fu);
    v0 = FindTaskIdByFunc((int)sub_8088C70);
    DestroyTask(v0);
  }
  return v2;
}
