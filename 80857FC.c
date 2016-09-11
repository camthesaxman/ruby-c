int __fastcall FieldEffectScript_CallNative(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  _DWORD *v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = (_DWORD *)a1;
  v3 = a2;
  v4 = FieldEffectScript_ReadWord(a1);
  *v3 = call_via_r0(v4);
  *v2 += 4;
  return v6;
}
