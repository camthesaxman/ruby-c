int sub_80C6718()
{
  int *v0; // r1@1
  __int16 v2; // [sp+0h] [bp-Ch]@1
  __int16 v3; // [sp+2h] [bp-Ah]@1

  GetXYCoordsOneStepInFrontOfPlayer(&v2, &v3);
  v0 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80C6760, 0)];
  *((_WORD *)v0 + 4) = v2;
  *((_WORD *)v0 + 5) = v3;
  *((_WORD *)v0 + 6) = 0;
  return 0;
}
