int __fastcall sub_8088EB4(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int *v3; // r4@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v2;
  if ( v2 > 9 )
  {
    v3 = &dword_30048A0[9 * v202E85D];
    FieldObjectClearAnimIfSpecialAnimActive(v3);
    *((_BYTE *)v3 + 1) &= 0xEFu;
    *((_BYTE *)v3 + 2) &= 0xBFu;
    sub_8088FFC(*(_BYTE *)(v1 + 10), *((_BYTE *)v3 + 4));
    CameraObjectReset2();
    ++*(_WORD *)(v1 + 8);
  }
  return v5;
}
