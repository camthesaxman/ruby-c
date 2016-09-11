int __fastcall sub_8087FDC(int a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v3; // r0@1
  __int16 v4; // r0@2
  unsigned __int8 v5; // r0@4
  int v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+10h] [bp-4h]@5

  v1 = a1;
  memcpy(&v7, &gUnknown_0839F380, 5);
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = *(_WORD *)(v1 + 10) - 1;
  *(_WORD *)(v1 + 10) = v3;
  if ( !(v3 << 16) )
  {
    FieldObjectTurn((int)v2, *((_BYTE *)&v7 + (*((_BYTE *)v2 + 24) & 0xF)));
    *(_WORD *)(v1 + 10) = 8;
    v4 = *(_WORD *)(v1 + 12) + 1;
    *(_WORD *)(v1 + 12) = v4;
    if ( v4 > 4 && *(_WORD *)(v1 + 36) == (*((_BYTE *)v2 + 24) & 0xF) )
    {
      script_env_2_disable();
      CameraObjectReset1();
      sub_806451C();
      v5 = FindTaskIdByFunc((int)sub_8087E1C);
      DestroyTask(v5);
    }
  }
  return v8;
}
