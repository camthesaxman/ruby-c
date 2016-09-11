int sub_8093D50()
{
  int v0; // r0@1
  unsigned __int8 v1; // r0@1

  v2000004 = 0;
  v0 = SetHBlankCallback(0);
  sub_8093E04(v0);
  v1 = FindTaskIdByFunc((int)sub_8093A68);
  DestroyTask(v1);
  return 0;
}
