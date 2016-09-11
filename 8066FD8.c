int s6B_release()
{
  unsigned __int8 v0; // r0@1
  int v1; // r0@1

  textbox_close();
  v0 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  v1 = FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v0]);
  sub_80A2178(v1);
  sub_806451C();
  return 0;
}
