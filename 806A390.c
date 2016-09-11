int __fastcall sub_806A390(_WORD *a1)
{
  _WORD *v1; // r5@1
  _WORD *v2; // r0@1
  _WORD *v3; // r6@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r4@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (_WORD *)GetVarPointer(0x4040u);
  v3 = v2;
  v4 = *v2;
  v5 = *v1;
  if ( v4 != v5 && v4 <= v5 )
  {
    v6 = (*v1 - v4) & 0xFFFF;
    sub_80690B4();
    sub_80FA220(v6);
    sub_80BE8C4(v6);
    sub_8080834(v6);
    sub_80401D8(v6);
    sub_810D2F4(v6);
    sub_810D410(v6);
    sub_810F618(v6);
    sub_8145AA4(v6);
    *v3 = *v1;
  }
  return v8;
}
