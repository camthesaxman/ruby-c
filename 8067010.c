int s6C_release_2()
{
  unsigned __int8 v0; // r0@3
  int v1; // r0@3

  textbox_close();
  if ( LOBYTE(dword_30048A0[9 * (unsigned __int8)byte_3004AE0]) << 31 )
    FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * (unsigned __int8)byte_3004AE0]);
  v0 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  v1 = FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v0]);
  sub_80A2178(v1);
  sub_806451C();
  return 0;
}
