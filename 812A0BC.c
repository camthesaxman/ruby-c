int contest_ai_check_can_participate()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = sub_8128A7C(*(_BYTE *)(v2039238 + 1));
  v20192FC = sub_80AF59C(v0) << 24 == 0;
  v2039238 += 2;
  return v2;
}
