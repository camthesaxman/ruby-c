int __fastcall camera_move_and_redraw(int a1, int a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  CameraMove(a1, a2);
  UpdateFieldObjectsForCameraUpdate(v2, v3);
  DrawWholeMapView();
  word_300489C -= 16 * v2;
  word_3004898 -= 16 * v3;
  return v5;
}
